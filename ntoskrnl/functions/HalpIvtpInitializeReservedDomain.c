__int64 __fastcall HalpIvtpInitializeReservedDomain(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _DWORD *v7; // r8
  unsigned int v8; // ebx
  __int64 result; // rax
  int v10; // eax
  _DWORD *v11; // rax
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-59h]
  __int64 v14; // [rsp+28h] [rbp-51h]
  __int64 v15; // [rsp+38h] [rbp-41h]
  _QWORD v16[14]; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v17; // [rsp+E8h] [rbp+6Fh] BYREF
  int v18; // [rsp+F0h] [rbp+77h] BYREF
  int v19; // [rsp+F4h] [rbp+7Bh]

  v4 = *((_QWORD *)a2 + 1);
  v17 = 0LL;
  v7 = *(_DWORD **)v4;
  if ( **(_DWORD **)v4 == 1 )
  {
    if ( *((unsigned __int16 *)v7 + 4) == *(_DWORD *)(a1 + 252) )
    {
      result = IvtAllocateTranslationStructures(a1, *((unsigned __int16 *)v7 + 6), (__int64)v7, a4, (__int64 *)&v17);
      v8 = result;
      if ( (int)result < 0 )
        return result;
      memset(v16, 0, sizeof(v16));
      v10 = *a2;
      v19 = 0;
      LODWORD(v16[6]) = v10;
      v16[5] = *(_QWORD *)(v4 + 16);
      v11 = *(_DWORD **)v4;
      v16[0] = 0x200000001LL;
      v18 = *((unsigned __int16 *)v11 + 6);
      IvtUpdateTranslationStructures(a1, &v18, v12, v17, v13, v14, (__int64)v16, v15, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
