/*
 * XREFs of ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0268A90
 * Callers:
 *     ?Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0268BE0 (-Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationC.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0268C98 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0268E50 (-ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C0268ECC (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00C3930 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     Feature_503751999__private_IsEnabledDeviceUsage @ 0x1C00E15EC (Feature_503751999__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEAVCInteractionTrackerBindingManagerMarshaler@2@@Z @ 0x1C0267E54 (-SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicatio.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  size_t v9; // r8
  bool v10; // zf
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  size_t v13; // rcx
  struct DirectComposition::CResourceMarshaler *v14; // rsi
  struct DirectComposition::CResourceMarshaler *v15; // rdi
  _OWORD Src[2]; // [rsp+20h] [rbp-58h] BYREF
  struct DirectComposition::CResourceMarshaler *v17[2]; // [rsp+40h] [rbp-38h]

  if ( !*((_BYTE *)this + 64) )
  {
    v4 = *((_QWORD *)this + 12);
    v5 = 0;
    v6 = 0;
    *((_BYTE *)this + 64) = 1;
    if ( v4 )
    {
      v7 = 0LL;
      do
      {
        v8 = *((_QWORD *)this + 9);
        v9 = *((_QWORD *)this + 13);
        v10 = *(_DWORD *)(v7 * v9 + v8 + 16) == 0;
        v11 = *(_OWORD *)(v7 * v9 + v8);
        *(_OWORD *)v17 = v11;
        if ( v10 )
        {
          v14 = v17[0];
          v10 = (*((_DWORD *)v17[0] + 16))-- == 1;
          if ( v10 )
          {
            if ( (unsigned int)Feature_503751999__private_IsEnabledDeviceUsage() )
              *((_QWORD *)v14 + 56) = 0LL;
            else
              DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
                (struct DirectComposition::CResourceMarshaler **)v14,
                a2,
                0LL);
          }
          v15 = v17[1];
          v10 = (*((_DWORD *)v17[1] + 16))-- == 1;
          if ( v10 )
          {
            if ( (unsigned int)Feature_503751999__private_IsEnabledDeviceUsage() )
              *((_QWORD *)v15 + 56) = 0LL;
            else
              DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
                (struct DirectComposition::CResourceMarshaler **)v15,
                a2,
                0LL);
          }
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v15);
        }
        else
        {
          v12 = *(_OWORD *)(v7 * v9 + v8 + 16);
          v13 = v5 * v9;
          Src[0] = v11;
          Src[1] = v12;
          ++v5;
          memmove((void *)(v8 + v13), Src, v9);
        }
        v4 = *((_QWORD *)this + 12);
        v7 = ++v6;
      }
      while ( v6 < v4 );
    }
    DirectComposition::CDCompDynamicArrayBase::Shrink(
      (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
      v4 - v5);
    *((_BYTE *)this + 64) = 0;
  }
}
