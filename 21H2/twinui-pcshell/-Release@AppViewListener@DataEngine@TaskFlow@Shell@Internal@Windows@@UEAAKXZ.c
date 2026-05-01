/*
 * XREFs of ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAKXZ @ 0x1802A9710
 * Callers:
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ @ 0x180166A10 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ @ 0x180166A20 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ @ 0x180166A30 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAKXZ @ 0x180166A40 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAKXZ.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCI@EAAKXZ @ 0x180166A50 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(this);
}
