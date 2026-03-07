__int64 __fastcall HvlQueryAssociatedProcessors(ULONG a1, ULONG *a2, _DWORD *a3)
{
  unsigned int v7; // edi
  PHYSICAL_ADDRESS *v8; // rbx
  PHYSICAL_ADDRESS *v9; // r15
  ULONG LowPart; // ecx
  unsigned __int16 *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+58h] [rbp-8h]

  v18 = 0LL;
  LODWORD(v19) = 0;
  v15 = 0LL;
  LODWORD(v16) = 0;
  v17 = 0LL;
  v14 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v7 = 0;
  if ( !a2 )
    return 3221225485LL;
  v8 = HvlpAcquireHypercallPage((__int64)&v17, 1, 0LL, 8LL);
  v9 = HvlpAcquireHypercallPage((__int64)&v14, 2, 0LL, 2056LL);
  v8->LowPart = a1;
  if ( (unsigned __int16)HvcallInitiateHypercall(138) )
  {
    v7 = -1073741823;
  }
  else
  {
    LowPart = v9->LowPart;
    if ( *a2 < v9->LowPart )
    {
      v7 = -1073741789;
    }
    else if ( LowPart )
    {
      v11 = (unsigned __int16 *)&v9->QuadPart + 2;
      v12 = LowPart;
      do
      {
        v13 = *v11++;
        *a3++ = v13;
        --v12;
      }
      while ( v12 );
    }
    *a2 = LowPart;
  }
  HvlpReleaseHypercallPage((__int64)&v14);
  HvlpReleaseHypercallPage((__int64)&v17);
  return v7;
}
