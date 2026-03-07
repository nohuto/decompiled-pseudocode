__int64 __fastcall HvlCollectLivedump(LONGLONG a1, __int64 a2, LONGLONG *a3, __int64 a4)
{
  __int64 result; // rax
  PHYSICAL_ADDRESS *v9; // rbx
  PHYSICAL_ADDRESS *v10; // r15
  __int16 v11; // ax
  int v12; // esi
  void *v13; // rcx
  unsigned int v14; // ebx
  __int128 v15; // [rsp+20h] [rbp-89h] BYREF
  __int64 v16; // [rsp+30h] [rbp-79h]
  __int64 v17; // [rsp+38h] [rbp-71h]
  __int128 v18; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-59h]
  __int64 v20; // [rsp+58h] [rbp-51h]
  _BYTE v21[32]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v22[64]; // [rsp+80h] [rbp-29h] BYREF

  v19 = 0LL;
  LODWORD(v20) = 0;
  v16 = 0LL;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v15 = 0LL;
  if ( (HvlpRootFlags & 2) == 0 || !qword_140C5F008 )
    return 3221225659LL;
  if ( VslVsmEnabled )
  {
    result = VslCollectLiveDumpInSk(a1, a2, a3, a4, v15, *((_QWORD *)&v15 + 1), v16, v17);
    if ( (int)result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else
  {
    v9 = HvlpAcquireHypercallPage((__int64)&v18, 1, (__int64)v22, 32LL);
    v10 = HvlpAcquireHypercallPage((__int64)&v15, 2, (__int64)v21, 16LL);
    v9->QuadPart = a1;
    *(_OWORD *)&v9[1].LowPart = *(_OWORD *)a2;
    v9[3] = *(PHYSICAL_ADDRESS *)(a2 + 16);
    v11 = HvcallInitiateHypercall(142);
    if ( !v11 || v11 == 51 )
    {
      *a3 = v10->QuadPart;
      v12 = 0;
    }
    else
    {
      v12 = -1073741823;
    }
    HvlpReleaseHypercallPage((__int64)&v15);
    HvlpReleaseHypercallPage((__int64)&v18);
    if ( v12 >= 0 )
    {
      v13 = *(void **)(a4 + 32);
      v14 = dword_140C5F018 << 12;
      if ( v13 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v14 )
        memmove(v13, qword_140C5F008, v14);
      else
        *(_QWORD *)(a4 + 32) = qword_140C5F008;
      *(_DWORD *)(a4 + 40) = v14;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return (unsigned int)v12;
  }
  return result;
}
