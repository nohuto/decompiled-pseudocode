unsigned __int64 __fastcall XmInt1aFindPciClassCode(__int64 a1)
{
  unsigned __int64 result; // rax
  char v2; // di
  unsigned int v4; // r12d
  unsigned int v5; // ebx
  unsigned __int8 i; // r14
  unsigned int v7; // esi
  unsigned int v8; // r10d
  unsigned int j; // r15d
  int v10; // eax
  unsigned int v11; // ecx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = 0;
  v4 = 0;
  v13 = 0;
  v5 = 0;
  for ( i = 0; i < (unsigned __int8)XmNumberPciBusses; ++i )
  {
    v7 = 0;
    v8 = i;
    while ( 2 )
    {
      for ( j = 0; j < 8; ++j )
      {
        v5 = v7 & 0x1F | v5 & 0xFFFFFF00 | (32 * (j & 7));
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *, __int64, int))XmGetPciData)(v8, v5, &v13, 8LL, 4);
        v11 = v13;
        if ( v10 != 4 )
          v11 = -1;
        result = *(_DWORD *)(a1 + 28) & 0xFFFFFF;
        v13 = v11 >> 8;
        if ( v11 >> 8 == (_DWORD)result )
        {
          result = v4++;
          if ( (_DWORD)result == *(unsigned __int16 *)(a1 + 48) )
          {
            *(_BYTE *)(a1 + 37) = i;
            *(_DWORD *)(a1 + 16) &= ~1u;
            *(_BYTE *)(a1 + 36) = j | (8 * v7);
            goto LABEL_12;
          }
        }
        v8 = i;
      }
      ++v7;
      v8 = i;
      if ( v7 < 0x20 )
        continue;
      break;
    }
  }
  *(_DWORD *)(a1 + 16) |= 1u;
  v2 = -122;
LABEL_12:
  *(_BYTE *)(a1 + 25) = v2;
  return result;
}
