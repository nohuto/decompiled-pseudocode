__int64 __fastcall NVMeGetNVMSetAttributeList(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  _QWORD *v4; // rbp
  unsigned __int16 i; // r14
  int j; // edx
  __int64 v7; // rcx
  unsigned __int8 *v8; // rbx
  int v9; // eax

  v1 = *(_QWORD *)(a1 + 1840);
  result = *(unsigned int *)(v1 + 96);
  if ( (result & 4) != 0 && (result = *(unsigned __int16 *)(v1 + 338), (_WORD)result) )
  {
    v4 = (_QWORD *)(a1 + 4264);
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)((_DWORD)result << 7), 1701672526LL);
    if ( !(_DWORD)result )
    {
      if ( *v4 )
      {
        for ( i = 0; i < *(_WORD *)(v1 + 338); i += result )
        {
          LocalCommandReuse(a1, a1 + 944);
          for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= j )
            ++j;
          *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
          v7 = *(_QWORD *)(a1 + 1040);
          *(_QWORD *)(v7 + 4120) = *(_QWORD *)(a1 + 1944);
          *(_WORD *)(v7 + 4140) = i + 1;
          *(_BYTE *)(v7 + 4096) = 6;
          *(_DWORD *)(v7 + 4100) = 0;
          *(_BYTE *)(v7 + 4136) = 4;
          ProcessCommand(a1, a1 + 952);
          result = WaitForCommandCompleteWithCustomTimeout(a1);
          if ( *(_BYTE *)(a1 + 955) != 1 )
            break;
          v8 = *(unsigned __int8 **)(a1 + 1936);
          v9 = *v8;
          if ( v9 >= *(unsigned __int16 *)(v1 + 338) - i )
            v9 = *(unsigned __int16 *)(v1 + 338) - i;
          memmove((void *)(*v4 + ((unsigned __int64)i << 7)), v8 + 128, (__int64)v9 << 7);
          result = *v8;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 4264) = 0LL;
  }
  return result;
}
