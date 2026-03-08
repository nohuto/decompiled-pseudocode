/*
 * XREFs of PoGetRequester @ 0x1402BDACC
 * Callers:
 *     PoCaptureReasonContext @ 0x1402BD2FC (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD *Teb; // rdx
  LONG_PTR v6; // rax
  _KPROCESS *Process; // rcx
  __int16 v8; // ax
  bool v9; // zf
  char v10; // al
  LONG_PTR v11; // [rsp+48h] [rbp+20h]

  result = (LONG_PTR)a2;
  if ( a1 )
  {
    v11 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
    if ( Teb )
    {
      if ( !KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[30] )
        goto LABEL_10;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[1].Affinity.StaticBitmap[30] )
        goto LABEL_10;
      v8 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( v8 == 332 || (v9 = v8 == 452, v10 = 0, v9) )
        v10 = 1;
      if ( v10 )
        v6 = *((unsigned int *)Teb + 3032);
      else
LABEL_10:
        v6 = Teb[740];
      v11 = v6;
    }
    *(_DWORD *)a3 = (v11 != 0) + 1;
    *(_QWORD *)(a3 + 8) = KeGetCurrentThread()->ApcState.Process;
    result = v11;
    *(_DWORD *)(a3 + 16) = v11;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      return ObfReferenceObjectWithTag(a2, 0x67446F50u);
  }
  return result;
}
