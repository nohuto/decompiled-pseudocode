__int64 __fastcall FreeInputContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !gcInHMDestroyUnlockedObjectWorker )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 210LL);
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 792LL);
    while ( v3 )
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 56);
      if ( v3 == a1 )
      {
        tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(v4 + 56, *(_QWORD *)(a1 + 56));
        return HMFreeObject(a1);
      }
    }
    return HMFreeObject(a1);
  }
  return result;
}
