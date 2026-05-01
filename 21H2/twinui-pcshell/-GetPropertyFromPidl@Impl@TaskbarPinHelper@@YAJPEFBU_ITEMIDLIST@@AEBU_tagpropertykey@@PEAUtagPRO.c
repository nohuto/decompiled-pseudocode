/*
 * XREFs of ?GetPropertyFromPidl@Impl@TaskbarPinHelper@@YAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180157174
 * Callers:
 *     ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x18015962C (-IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetPropertyFromIDList@?$CItemIDFactory@UAPPITEM@@$0FDFAFAEB@@@SAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801570C0 (-GetPropertyFromIDList@-$CItemIDFactory@UAPPITEM@@$0FDFAFAEB@@@SAJPEFBU_ITEMIDLIST@@AEBU_tagprop.c)
 */

__int64 __fastcall TaskbarPinHelper::Impl::GetPropertyFromPidl(
        TaskbarPinHelper::Impl *this,
        const struct _ITEMIDLIST *a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int v6; // edi
  __int64 v8; // xmm1_8
  GUID v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]

  a3->fmtid = 0LL;
  v10 = 0LL;
  *(_QWORD *)&a3->pid = 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( !*(_WORD *)this )
      return 2147647531LL;
    LOWORD(pvar[0]) = 0;
    if ( (int)CItemIDFactory<APPITEM,1397772353>::GetPropertyFromIDList(
                (unsigned __int16 *)this,
                (DWORD)a2,
                (__int64)pvar) >= 0 )
      break;
    PropVariantClear(pvar);
    ++v6;
    this = (TaskbarPinHelper::Impl *)((char *)this + *(unsigned __int16 *)this);
    if ( v6 >= 100 )
      return 2147647531LL;
  }
  memcpy(&v9, pvar, 0x18uLL);
  v8 = v10;
  *(_OWORD *)pvar = 0LL;
  v12 = 0LL;
  a3->fmtid = v9;
  *(_QWORD *)&a3->pid = v8;
  PropVariantClear(pvar);
  return 0LL;
}
