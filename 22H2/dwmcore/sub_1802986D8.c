/*
 * XREFs of sub_1802986D8 @ 0x1802986D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1802986D8(Microsoft::WRL::FtmBase *a1, struct IStream *a2, const struct _GUID *a3, void **a4)
{
  char v4; // of
  _DWORD *v5; // rdi
  _DWORD *v6; // rsi

  if ( !v4 )
    JUMPOUT(0x18029869BLL);
  *v5 = *v6;
  return Microsoft::WRL::FtmBase::UnmarshalInterface(a1, a2, a3, a4);
}
