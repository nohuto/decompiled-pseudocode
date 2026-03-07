__int64 __fastcall PsPicoWalkUserStack(__int64 a1, unsigned int a2)
{
  _OWORD *BaseTrapFrame; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  struct _KTHREAD *v10; // rax
  _BYTE v12[400]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v12, 0, sizeof(v12));
  BaseTrapFrame = (_OWORD *)PsGetBaseTrapFrame((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( (_QWORD)xmmword_140C37D50 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 3LL;
    --CurrentThread->SpecialApcDisable;
    v8 = v12;
    do
    {
      *v8 = *BaseTrapFrame;
      v8[1] = BaseTrapFrame[1];
      v8[2] = BaseTrapFrame[2];
      v8[3] = BaseTrapFrame[3];
      v8[4] = BaseTrapFrame[4];
      v8[5] = BaseTrapFrame[5];
      v8[6] = BaseTrapFrame[6];
      v8 += 8;
      v9 = BaseTrapFrame[7];
      BaseTrapFrame += 8;
      *(v8 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *v8 = *BaseTrapFrame;
    v10 = KeGetCurrentThread();
    if ( v10->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return ((__int64 (__fastcall *)(_BYTE *, __int64, _QWORD))xmmword_140C37D50)(v12, a1, a2);
  }
  return result;
}
