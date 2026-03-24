/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0020084
 * Callers:
 *     FreeHook @ 0x1C001FF90 (FreeHook.c)
 * Callees:
 *     PhkFirstValid @ 0x1C002022C (PhkFirstValid.c)
 *     PhkFirstGlobalValid @ 0x1C006668C (PhkFirstGlobalValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  BOOL v5; // esi
  __int64 Valid; // rax
  int v7; // r9d
  PRKPROCESS *v8; // r15
  int v9; // edx

  v3 = a2;
  v5 = 1;
  Valid = PhkFirstValid(a1, a2, a3, 1LL);
  if ( Valid )
    v5 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid(a1, v3) == 0;
  if ( v7 )
  {
    *((_DWORD *)a1 + 170) &= ~(1 << (v3 + 1));
    if ( *((_QWORD *)a1 + 60) )
    {
      v8 = (PRKPROCESS *)*((_QWORD *)a1 + 53);
      if ( v8 == (PRKPROCESS *)PsGetCurrentProcessWin32Process() )
      {
        v9 = 0;
      }
      else
      {
        KeAttachProcess(*v8);
        v9 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 60) + 56LL) = *((_DWORD *)a1 + 170);
      if ( v9 )
        KeDetachProcess();
    }
  }
  if ( v5 )
    *(_DWORD *)(**((_QWORD **)a1 + 58) + 16LL) &= ~(1 << (v3 + 1));
}
