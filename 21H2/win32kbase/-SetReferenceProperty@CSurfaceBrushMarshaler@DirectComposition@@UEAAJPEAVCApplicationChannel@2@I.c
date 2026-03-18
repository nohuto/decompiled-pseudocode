/*
 * XREFs of ?SetReferenceProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0012190
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetReferenceProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int v9; // ebp
  char v10; // al
  __int64 v11; // rcx
  struct DirectComposition::CResourceMarshaler **v12; // rsi
  char v14; // al
  bool v15; // zf

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 != 6 )
      return (unsigned int)-1073741811;
    v9 = 64;
    if ( a4 )
    {
      v10 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              27LL);
      v11 = 88LL;
      goto LABEL_6;
    }
    v11 = 88LL;
    goto LABEL_14;
  }
  v9 = 32;
  if ( !a4 )
  {
    v11 = 80LL;
LABEL_14:
    v10 = 1;
    goto LABEL_6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
         a4,
         40LL)
    || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
         a4,
         201LL)
    || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
         a4,
         127LL)
    || (v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                69LL),
        v15 = v14 == 0,
        v10 = 0,
        !v15) )
  {
    v10 = 1;
  }
  v11 = 80LL;
LABEL_6:
  v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v11);
  if ( !(DirectComposition::CSurfaceBrushMarshaler *)((char *)this + v11) || !v10 )
    return (unsigned int)-1073741811;
  if ( *v12 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v12);
    *v12 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= v9;
    *a5 = 1;
  }
  return v5;
}
