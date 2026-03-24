/*
 * XREFs of ?SetReferenceProperty@CSceneMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01DE470
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C005FA08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D47C4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CSceneMeshMarshaler::SetReferenceProperty(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  struct DirectComposition::CResourceMarshaler *v15; // rdx
  struct DirectComposition::CResourceMarshaler *v16; // rdx
  struct DirectComposition::CResourceMarshaler *v17; // rdx
  struct DirectComposition::CResourceMarshaler *v18; // rdx
  struct DirectComposition::CResourceMarshaler *v19; // rdx
  struct DirectComposition::CResourceMarshaler *v20; // rdx
  struct DirectComposition::CResourceMarshaler *v21; // rdx

  v5 = 0;
  *a5 = 0;
  v9 = a3 - 1;
  if ( !v9 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           171LL) )
    {
      v21 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
      if ( a4 != v21 )
      {
        if ( v21 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v21);
        *((_QWORD *)this + 8) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x40u;
        goto LABEL_65;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           171LL) )
    {
      v20 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
      if ( a4 != v20 )
      {
        if ( v20 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v20);
        *((_QWORD *)this + 9) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x80u;
        goto LABEL_65;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           171LL) )
    {
      v19 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
      if ( a4 != v19 )
      {
        if ( v19 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v19);
        *((_QWORD *)this + 10) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x100u;
        goto LABEL_65;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           171LL) )
    {
      v18 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 11);
      if ( a4 != v18 )
      {
        if ( v18 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v18);
        *((_QWORD *)this + 11) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x200u;
        goto LABEL_65;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           171LL) )
    {
      v17 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
      if ( a4 != v17 )
      {
        if ( v17 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v17);
        *((_QWORD *)this + 12) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x400u;
        goto LABEL_65;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 1
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            171LL)) )
    {
      v15 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
      if ( a4 != v15 )
      {
        if ( v15 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v15);
        *((_QWORD *)this + 14) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x1000u;
LABEL_65:
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          171LL) )
  {
    return (unsigned int)-1073741811;
  }
  v16 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
  if ( a4 != v16 )
  {
    if ( v16 )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v16);
    *((_QWORD *)this + 13) = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= 0x800u;
    goto LABEL_65;
  }
  return v5;
}
