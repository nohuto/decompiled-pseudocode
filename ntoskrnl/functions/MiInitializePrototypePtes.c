__int64 __fastcall MiInitializePrototypePtes(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int16 *a3, int a4)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r11d
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r8
  ULONG_PTR v16; // r11
  _QWORD v17[2]; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v18[28]; // [rsp+30h] [rbp-78h] BYREF

  v4 = 8 * a2;
  result = (__int64)memset(v18, 0, 0x68uLL);
  v9 = 4096LL;
  LOBYTE(v10) = 2;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    result = MiMakeSubsectionPte((__int64)a3);
    v11 = v10;
LABEL_3:
    v12 = result;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 56LL) & 0x1000) == 0 )
  {
    result = MiMakeDemandZeroPte((a3[16] >> 1) & 0x1F);
    v11 = 1026LL;
    goto LABEL_3;
  }
  v12 = 0LL;
  v11 = 1026LL;
LABEL_4:
  if ( v4 >= v9 )
  {
    if ( !a4 )
    {
      v17[0] = BugCheckParameter1;
      v17[1] = v4;
      MiInitializeFaultVaListCore((__int64)v18, (__int64)v17, 1LL, v10);
      v18[10] = (*(_DWORD *)(v14 + 56) >> 20) & 0x7F;
      MmAccessFault(v16, BugCheckParameter1, 0, v15 | (unsigned __int64)v18);
      goto LABEL_6;
    }
    v13 = v12;
    if ( !v12 )
      v13 = MiMakeDemandZeroPte(4) & 0xFFFFFFFFFFFFFC1FuLL;
    MiEncodeProtoFill(BugCheckParameter1, v4, v13 | v11);
    result = v4 & 0xFFFFFFFFFFFFF000uLL;
    BugCheckParameter1 += v4 & 0xFFFFFFFFFFFFF000uLL;
    v4 &= 0xFFFu;
  }
  if ( v4 )
  {
LABEL_6:
    result = v12;
    memset64((void *)BugCheckParameter1, v12, v4 >> 3);
  }
  return result;
}
