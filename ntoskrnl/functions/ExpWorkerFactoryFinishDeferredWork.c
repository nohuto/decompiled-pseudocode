unsigned __int64 __fastcall ExpWorkerFactoryFinishDeferredWork(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned __int64 result; // rax
  _QWORD *v3; // rcx

  v1 = (_DWORD *)(a1 + 36);
  result = *(unsigned int *)(a1 + 36);
  if ( (result & 1) != 0 )
  {
    AlpciDestroyDeferredMessageContext();
    *v1 &= ~1u;
    result = (unsigned int)*v1;
  }
  if ( (result & 2) != 0 )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(result + 116) & 0x400) == 0 && *(_BYTE *)(result + 586) != 1 )
    {
      v3 = *(_QWORD **)(result + 240);
      if ( v3 )
        v3[87] = 0LL;
    }
    *v1 &= ~2u;
  }
  return result;
}
