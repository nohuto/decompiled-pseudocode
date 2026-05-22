/*
 * XREFs of ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180101980
 * Callers:
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x180101BFC (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 *     ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x180180270 (-GetContainerGuidFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??$As@UIContainerInfoInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1E44 (--$As@UIContainerInfoInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-.c)
 */

__int64 *__fastcall InputSite::GetAttachedObject<IContainerInfoInputObjectProxy>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 400);
  v4 = *(_QWORD *)(a1 + 408);
  while ( v3 != v4
       && (int)Microsoft::WRL::ComPtr<IUnknown>::As<IContainerInfoInputObjectProxy>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8),
                 a2) < 0 )
    v3 += 16LL;
  return a2;
}
