/*
 * XREFs of ?SetReferenceProperty@CDesktopTreeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00C3DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C3E58 (-ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDesktopTreeMarshaler::SetReferenceProperty(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  DirectComposition::CDesktopTreeMarshaler *v9; // rax

  v5 = 0;
  if ( a3 != 1 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           195LL) )
    {
      v9 = (DirectComposition::CDesktopTreeMarshaler *)*((_QWORD *)a4 + 25);
      if ( !v9 )
      {
        DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(this, a2);
        *((_QWORD *)a4 + 25) = this;
        *((_QWORD *)this + 9) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x40u;
        *a5 = 1;
        return v5;
      }
      if ( v9 == this )
        return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( *((_QWORD *)this + 9) )
  {
    DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(this, a2);
    *a5 = 1;
  }
  return v5;
}
