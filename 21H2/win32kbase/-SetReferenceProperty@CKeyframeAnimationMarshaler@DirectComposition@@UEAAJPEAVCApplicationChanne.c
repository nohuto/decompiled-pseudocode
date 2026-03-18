/*
 * XREFs of ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C009BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C009C050 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 0xCu:
      if ( !a4
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              168LL) )
      {
        return (unsigned int)-1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
      if ( v9 == a4 )
        return v5;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 17) = a4;
      goto LABEL_9;
    case 0x19u:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              2LL) )
      {
        return (unsigned int)-1073741811;
      }
      v11 = (struct DirectComposition::CResourceMarshaler *)((*((_QWORD *)this + 21) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 21) >> 64));
      if ( a4 == v11 )
        return v5;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
      *((_QWORD *)this + 21) = 0LL;
      if ( !a4 )
      {
LABEL_10:
        *a5 = 1;
LABEL_11:
        *((_DWORD *)this + 4) &= ~0x800u;
        return v5;
      }
      *((_QWORD *)this + 21) = (char *)a4 - 16;
LABEL_9:
      DirectComposition::CResourceMarshaler::AddRef(a4);
      goto LABEL_10;
    case 0x1Au:
      if ( a4
        && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
             a4,
             168LL) )
      {
        if ( *((_QWORD *)this + 18) )
          return (unsigned int)-1073741790;
        *((_QWORD *)this + 18) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
        *a5 = 1;
        *((_DWORD *)this + 78) = 1;
        goto LABEL_11;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
