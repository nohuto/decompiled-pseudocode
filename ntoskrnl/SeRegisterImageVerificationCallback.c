/*
 * XREFs of SeRegisterImageVerificationCallback @ 0x140860D20
 * Callers:
 *     <none>
 * Callees:
 *     ExRegisterCallback @ 0x1402FBE90 (ExRegisterCallback.c)
 */

__int64 __fastcall SeRegisterImageVerificationCallback(
        int a1,
        int a2,
        CALLBACK_FUNCTION *a3,
        void *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  PVOID v7; // rax

  if ( a1 == 1 )
  {
    v6 = 0;
    if ( a2 )
    {
      return (unsigned int)-1073741584;
    }
    else if ( a5 )
    {
      return (unsigned int)-1073741581;
    }
    else
    {
      v7 = ExRegisterCallback(ExCbSeImageVerificationDriverInfo, a3, a4);
      if ( v7 )
      {
        _InterlockedIncrement(&dword_140D0C78C);
        *a6 = v7;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v6;
}
