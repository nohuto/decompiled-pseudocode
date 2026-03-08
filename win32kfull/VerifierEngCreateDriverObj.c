/*
 * XREFs of VerifierEngCreateDriverObj @ 0x1C02A9680
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x1C0287040 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A923C (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure((__int64)pvObj) )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
