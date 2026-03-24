/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0170C20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001F24 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001C490 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rax
  unsigned int i; // esi
  int VidPnSourceOwnerType; // ebp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  int v12; // edx
  __int64 v13; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v18; // [rsp+38h] [rbp-20h]
  char v19; // [rsp+40h] [rbp-18h]

  v18 = a1;
  v19 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v6 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 337);
    for ( i = 0; i < *((_DWORD *)v6 + 20); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v6, i);
      if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((ADAPTER_DISPLAY **)a1 + 337), i) )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 )
      {
        v9 = 3968LL * i;
        v10 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 112LL);
        if ( *(_QWORD *)(v9 + v10 + 712) == *(_QWORD *)a2 )
        {
          v11 = *(_OWORD *)(v9 + v10 + 628);
          v12 = a2[2];
          if ( (int)v11 <= v12 && SDWORD2(v11) >= v12 )
          {
            v13 = a2[3];
            if ( SDWORD1(v11) <= (int)v13 && SHIDWORD(v11) >= (int)v13 )
            {
              if ( a2[4] != -1 )
              {
                v16 = WdLogNewEntry5_WdAssertion(DWORD1(v11), v13);
                *(_QWORD *)(v16 + 24) = 10123LL;
                WdLogEvent5_WdAssertion(v16);
              }
              a2[4] = i;
              *(_QWORD *)(a2 + 5) = *(_QWORD *)((char *)a1 + 316);
              a2[7] = VidPnSourceOwnerType;
            }
          }
        }
      }
      v6 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 337);
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
    v15[3] = a1;
    v15[4] = *((int *)a1 + 80);
    v15[5] = *((unsigned int *)a1 + 79);
  }
  if ( v19 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  return 0LL;
}
