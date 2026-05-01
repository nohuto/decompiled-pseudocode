/*
 * XREFs of ?AddRef@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18003ADE0
 * Callers:
 *     ?AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180047BD0 (-AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddRef(ExecutionModel::ResourceManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
