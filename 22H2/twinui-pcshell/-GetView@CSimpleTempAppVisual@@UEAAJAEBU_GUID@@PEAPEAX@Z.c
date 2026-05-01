/*
 * XREFs of ?GetView@CSimpleTempAppVisual@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18049C060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleTempAppVisual::GetView(CSimpleTempAppVisual *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *); // rcx

  *a3 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *))*((_QWORD *)this + 3);
  if ( v3 )
    return (**v3)(v3, a2);
  else
    return 2147943568LL;
}
