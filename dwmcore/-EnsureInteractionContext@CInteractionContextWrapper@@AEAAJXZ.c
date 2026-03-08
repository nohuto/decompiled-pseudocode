/*
 * XREFs of ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x180280D90
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x180130EE0 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x180281700 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1802808CC (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 */

__int64 __fastcall CInteractionContextWrapper::EnsureInteractionContext(CInteractionContextWrapper *this)
{
  __int64 result; // rax
  struct HINTERACTIONCONTEXT__ **v2; // rbx
  struct HINTERACTIONCONTEXT__ *v4; // rdx
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]

  result = 0LL;
  v2 = (struct HINTERACTIONCONTEXT__ **)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    result = CreateInteractionContext((char *)this + 16);
    if ( (int)result >= 0 )
    {
      v5[1] = 0;
      v4 = *v2;
      v6 = _xmm;
      v5[0] = 2;
      return CInteractionContextWrapper::ConfigureInteractionContext(this, v4, (const struct SetupInfo *)v5);
    }
  }
  return result;
}
