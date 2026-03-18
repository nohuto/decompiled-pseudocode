/*
 * XREFs of ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0230C50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C022FF68 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4ScrollAxis@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C0230A2C (-SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChan.c)
 *     ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C0230F20 (-SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplica.c)
 *     ?SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C0230FDC (-SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicatio.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // edi
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  unsigned int v17; // r14d
  __int64 v18; // rcx

  v5 = 0;
  v9 = a3 - 18;
  if ( v9 )
  {
    v10 = v9 - 15;
    if ( v10 )
    {
      v11 = v10 - 4;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 27;
              if ( v15 )
              {
                if ( v15 == 1
                  && (!a4
                   || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                        a4,
                        43LL)) )
                {
                  v16 = 1;
                  return (unsigned int)DirectComposition::CInteractionTrackerMarshaler::SetInertiaCenterpoint(
                                         (__int64)this,
                                         a2,
                                         v16,
                                         a4,
                                         a5);
                }
              }
              else if ( !a4
                     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                          a4,
                          43LL) )
              {
                v16 = 0;
                return (unsigned int)DirectComposition::CInteractionTrackerMarshaler::SetInertiaCenterpoint(
                                       (__int64)this,
                                       a2,
                                       v16,
                                       a4,
                                       a5);
              }
              return (unsigned int)-1073741811;
            }
            v17 = 3;
          }
          else
          {
            v17 = 2;
          }
        }
        else
        {
          v17 = 1;
        }
      }
      else
      {
        v17 = 0;
      }
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              43LL) )
      {
        return (unsigned int)-1073741811;
      }
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[v17 + 30]);
      this[v17 + 30] = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                                v18,
                                                v17);
      *a5 = 1;
    }
    else
    {
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              10LL) )
      {
        return (unsigned int)-1073741811;
      }
      v5 = DirectComposition::CInteractionTrackerMarshaler::SetRequestedScaleAnimation(
             (DirectComposition::CInteractionTrackerMarshaler *)this,
             a2,
             a4,
             a5);
      if ( v5 >= 0 )
        *((_BYTE *)this + 464) &= ~2u;
    }
  }
  else
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            10LL) )
    {
      return (unsigned int)-1073741811;
    }
    v5 = DirectComposition::CInteractionTrackerMarshaler::SetRequestedPositionAnimation(
           (DirectComposition::CInteractionTrackerMarshaler *)this,
           a2,
           a4,
           a5);
    if ( v5 >= 0 )
      *((_BYTE *)this + 464) &= ~1u;
  }
  return (unsigned int)v5;
}
