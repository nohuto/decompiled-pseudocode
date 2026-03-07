__int64 __fastcall sub_140095AB0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  char v5; // cl
  __int64 v6; // r9
  int v7; // r10d
  unsigned int v8; // r11d
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 456) + 72LL))(*(_QWORD *)(a1 + 456), &v11);
  if ( !(_DWORD)result )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(a1 + 376);
      result = *(unsigned int *)(v10 + 52);
      if ( *(_DWORD *)(v10 + 48) == (_DWORD)result )
        break;
      v3 = *(unsigned int *)(v10 + 48);
      v4 = v3 * *(unsigned __int16 *)(v10 + 2);
      v5 = *(_BYTE *)(v4 + v10 + 75);
      if ( (v5 & 1) != 0 )
      {
        *(_DWORD *)(v10 + 48) = *(_DWORD *)(v10 + 8) & (v3 + 1);
      }
      else
      {
        if ( (v5 & 2) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 384) + 48LL) = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 8LL) & (*(_DWORD *)(v4 + v10 + 64)
                                                                                                + *(unsigned __int16 *)(v4 + v10 + 68));
        }
        else
        {
          v6 = *(_QWORD *)(a1 + 384);
          v7 = *(_DWORD *)(v4 + v10 + 64);
          v8 = *(unsigned __int16 *)(v4 + v10 + 68);
          v9 = *(_DWORD *)(v6 + 8);
          result = v9 & ((v9 & (unsigned int)(v11 - v7)) + 1);
          if ( v8 > (unsigned int)result )
            return result;
          *(_DWORD *)(v6 + 48) = v9 & (v7 + v8);
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 376) + 48LL) = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 8LL) & (*(_DWORD *)(*(_QWORD *)(a1 + 376) + 48LL)
                                                                                              + 1);
      }
    }
  }
  return result;
}
