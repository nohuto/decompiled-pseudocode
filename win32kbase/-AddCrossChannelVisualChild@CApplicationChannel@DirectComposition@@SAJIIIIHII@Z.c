/*
 * XREFs of ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0007780
 * Callers:
 *     NtDCompositionAddCrossDeviceVisualChild @ 0x1C0007750 (NtDCompositionAddCrossDeviceVisualChild.c)
 * Callees:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0007920 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0007BE4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0007EBC (-GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVRes.c)
 *     ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000B3CC (-ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005E76C (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F334 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::AddCrossChannelVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int SystemVisualFromCrossChannelVisualChild; // esi
  __int64 v11; // r14
  struct DirectComposition::CApplicationChannel *v13; // r15
  int SystemVisualForCrossChannelVisualChild; // eax
  struct DirectComposition::CApplicationChannel *v15; // r15
  struct DirectComposition::CApplicationChannel *v17; // rdi
  struct DirectComposition::CApplicationChannel *v18; // rdi
  unsigned int v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-Ch] BYREF
  struct DirectComposition::CApplicationChannel *v21; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+68h]

  v7 = 0;
  v8 = 0;
  v19 = 0;
  SystemVisualFromCrossChannelVisualChild = 0;
  v11 = 0LL;
  v20 = 0;
  if ( !a6 || a6 == a1 )
  {
    v24 = a7;
LABEL_4:
    if ( a3 != a1 )
    {
      v21 = 0LL;
      SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, &v21);
      if ( SystemVisualFromCrossChannelVisualChild >= 0 )
      {
        v13 = v21;
        if ( !v11 || *((_QWORD *)v21 + 5) == v11 )
        {
          v11 = *((_QWORD *)v21 + 5);
          SystemVisualForCrossChannelVisualChild = DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
                                                     v21,
                                                     a4,
                                                     (struct ResourceHandle *)&v20);
          v8 = v20;
          SystemVisualFromCrossChannelVisualChild = SystemVisualForCrossChannelVisualChild;
        }
        else
        {
          SystemVisualFromCrossChannelVisualChild = -1073741811;
        }
        (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v13)(v13);
      }
      a4 = 0;
    }
    if ( SystemVisualFromCrossChannelVisualChild >= 0 )
    {
      v21 = 0LL;
      SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v21);
      if ( SystemVisualFromCrossChannelVisualChild >= 0 )
      {
        v15 = v21;
        if ( v11 && *((_QWORD *)v21 + 5) != v11 )
        {
          SystemVisualFromCrossChannelVisualChild = -1073741811;
        }
        else
        {
          v11 = *((_QWORD *)v21 + 5);
          SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
                                                      v21,
                                                      a2,
                                                      a3,
                                                      a4,
                                                      v8,
                                                      a5,
                                                      v24,
                                                      v7);
        }
        (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v15)(v15);
      }
    }
    goto LABEL_16;
  }
  v21 = 0LL;
  SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a6, &v21);
  if ( SystemVisualFromCrossChannelVisualChild >= 0 )
  {
    v17 = v21;
    v11 = *((_QWORD *)v21 + 5);
    SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
                                                v21,
                                                a7,
                                                (struct ResourceHandle *)&v19);
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v17)(v17);
    v7 = v19;
  }
  v24 = 0;
  if ( SystemVisualFromCrossChannelVisualChild >= 0 )
    goto LABEL_4;
LABEL_16:
  if ( v7 )
    DirectComposition::CConnection::ReleaseSystemResource(v11, v7);
  if ( v8 )
  {
    if ( SystemVisualFromCrossChannelVisualChild < 0 )
    {
      v21 = 0LL;
      if ( (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, &v21) >= 0 )
      {
        v18 = v21;
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(v21, v8);
        (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v18)(v18);
      }
    }
    DirectComposition::CConnection::ReleaseSystemResource(v11, v8);
  }
  return (unsigned int)SystemVisualFromCrossChannelVisualChild;
}
