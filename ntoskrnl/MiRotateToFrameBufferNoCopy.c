__int64 __fastcall MiRotateToFrameBufferNoCopy(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  int v7; // ebx
  unsigned int v8; // r15d
  __int64 v9; // r8
  unsigned __int64 *v10; // rsi
  unsigned __int64 *i; // r12
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned __int64 v21; // [rsp+40h] [rbp-30h]
  PVOID P[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+58h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-8h]
  int VadCacheAttribute; // [rsp+C8h] [rbp+58h]

  CurrentThread = 0LL;
  v23 = 0LL;
  if ( a4 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  P[1] = P;
  v21 = a2 + (a4 << 12) - 1;
  P[0] = P;
  v7 = 0;
  VadCacheAttribute = MiGetVadCacheAttribute(a1);
  v8 = 0;
  v10 = (unsigned __int64 *)(v9 + 48);
  for ( i = (unsigned __int64 *)(v9 + 48); v8 < a4; ++i )
  {
    v12 = *i;
    if ( (unsigned int)MiIsPfn(*i) )
    {
      result = MiLegitimatePageForDriversToMap(48 * v12 - 0x220000000000LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v13 = MiSanitizePage(v12);
      v14 = MiReferenceIoPages(1, v13, 1uLL, VadCacheAttribute, 0LL, 0LL);
      if ( v14 < 0 )
        goto LABEL_11;
      ++v7;
    }
    ++v8;
  }
  v14 = MiObtainRotateProtectionRanges(a1, a2, v21, (__int64)P);
  if ( v14 >= 0 )
  {
    *((_QWORD *)&v23 + 1) = a1;
    CurrentThread = KeGetCurrentThread();
    MiDeleteRotateAndStopFaults(a2, v21, &v23);
    while ( 1 )
    {
      v16 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v17 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      v18 = -2147483632;
      *(_QWORD *)(v17 + 8) = P;
      v19 = v16[2];
      v20 = (v16[3] - v19) >> 12;
      if ( (v16[4] & 7) != 1 )
        v18 = 16;
      MiMapLockedPagesInUserSpaceHelper(v19, (__int64)v10, 0LL, VadCacheAttribute, v20, 0LL, v18);
      ExFreePoolWithTag(v16, 0);
      v10 += v20;
    }
    MiRotateComplete((unsigned __int64 *)&v23);
    return 0LL;
  }
  else
  {
LABEL_11:
    while ( v7 )
    {
      v15 = *v10;
      if ( !(unsigned int)MiIsPfn(*v10) )
      {
        MiDereferenceIoPages(1, v15, 1uLL);
        --v7;
      }
      ++v10;
    }
    return (unsigned int)v14;
  }
}
