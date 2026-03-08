/*
 * XREFs of DxgkDestroySynchronizationObject @ 0x1C01DD330
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C018667C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObject(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkDestroySynchronizationObjectImpl(a1, 1, a3);
}
