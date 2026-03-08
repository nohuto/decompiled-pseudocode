/*
 * XREFs of CleanupPlaySound @ 0x1C00F5BA0
 * Callers:
 *     <none>
 * Callees:
 *     PlaySoundDisconnect @ 0x1C039CF50 (PlaySoundDisconnect.c)
 */

__int64 CleanupPlaySound()
{
  RPC_BINDING_HANDLE *v0; // rdi
  unsigned int v1; // ebx
  unsigned int v2; // eax

  v0 = CUserPlaySound::s_pUserPlaySound;
  v1 = 0;
  if ( CUserPlaySound::s_pUserPlaySound )
  {
    v2 = 0;
    if ( *CUserPlaySound::s_pUserPlaySound )
    {
      v2 = PlaySoundDisconnect(CUserPlaySound::s_pUserPlaySound);
      *v0 = 0LL;
    }
    v1 = v2;
    Win32FreePool(CUserPlaySound::s_pUserPlaySound);
  }
  return v1;
}
