/*
 * XREFs of ??1?$ComPtr@VCClientArea@@@WRL@Microsoft@@QEAA@XZ @ 0x18008550C
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EF40 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180024A3C (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall Microsoft::WRL::ComPtr<CClientArea>::~ComPtr<CClientArea>(CBaseObject **a1)
{
  CBaseObject *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CBaseObject *)CBaseObject::Release(result);
  }
  return result;
}
