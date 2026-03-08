/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x1C0201AEC
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0201FA0 (DpiPdoAddPdo.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C001F86C (DpiIsValidEdid.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C0201BDC (MonitorGetMonitorDescriptorIDs.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int MonitorDescriptorIDs; // esi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  void *Pool2; // rax
  _OWORD *v9; // rdi
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _OWORD *v15; // rbx
  __int128 v16; // xmm1

  v2 = *(_QWORD *)(a1 + 64);
  MonitorDescriptorIDs = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( *(_DWORD *)(v2 + 496) != 1
    || *(_QWORD *)(a2 + 8)
    || (MonitorDescriptorIDs = MonitorGetMonitorDescriptorIDs(
                                 *(_QWORD *)(v5 + 3912),
                                 *(unsigned int *)(v2 + 504),
                                 v2 + 512),
        (MonitorDescriptorIDs & 0x80000000) != 0) )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 && (*(_DWORD *)(v2 + 496) != 1 || DpiIsValidEdid(v6)) )
    {
      v7 = *(unsigned int *)(a2 + 4);
      *(_DWORD *)(v2 + 924) = v7;
      Pool2 = (void *)ExAllocatePool2(256LL, v7, 1953656900LL);
      *(_QWORD *)(v2 + 928) = Pool2;
      if ( Pool2 )
      {
        v9 = *(_OWORD **)(a2 + 8);
        memmove(Pool2, v9, *(unsigned int *)(a2 + 4));
        v10 = *(_DWORD *)(v2 + 496);
        if ( v10 == 1 )
        {
          MonitorGetMonitorDescriptorIDs(*(_QWORD *)(v5 + 3912), *(unsigned int *)(v2 + 504), v2 + 512);
          return MonitorDescriptorIDs;
        }
        v13 = 2LL;
        if ( v10 == 2 )
        {
          v14 = 3LL;
          v15 = (_OWORD *)(v2 + 512);
          do
          {
            *v15 = *v9;
            v15[1] = v9[1];
            v15[2] = v9[2];
            v15[3] = v9[3];
            v15[4] = v9[4];
            v15[5] = v9[5];
            v15[6] = v9[6];
            v15 += 8;
            v16 = v9[7];
            v9 += 8;
            *(v15 - 1) = v16;
            --v14;
          }
          while ( v14 );
          *v15 = *v9;
          *((_QWORD *)v15 + 2) = *((_QWORD *)v9 + 2);
          return MonitorDescriptorIDs;
        }
        v12 = -1073741823LL;
        MonitorDescriptorIDs = -1073741823;
      }
      else
      {
        MonitorDescriptorIDs = -1073741801;
        v12 = -1073741801LL;
        v13 = 6LL;
      }
    }
    else
    {
      memset((void *)(v2 + 512), 0, 0x198uLL);
      v12 = -1073741823LL;
      MonitorDescriptorIDs = -1073741823;
      v13 = 4LL;
    }
    WdLogSingleEntry1(v13, v12);
    return MonitorDescriptorIDs;
  }
  return 0LL;
}
