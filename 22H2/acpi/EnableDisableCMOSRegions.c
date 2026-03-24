/*
 * XREFs of EnableDisableCMOSRegions @ 0x1C0016500
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0016500 (EnableDisableCMOSRegions.c)
 *     ACPITableLoad @ 0x1C00258B0 (ACPITableLoad.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     EnableDisableCMOSRegions @ 0x1C0016500 (EnableDisableCMOSRegions.c)
 *     AMLIGetFirstChild @ 0x1C001665C (AMLIGetFirstChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C001F220 (AMLIIsNamedChildPresent.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(__int64 a1)
{
  unsigned int v2; // ebp
  volatile signed __int32 *Child; // rdi
  __int16 v4; // ax
  KIRQL v5; // dl
  __int64 v6; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rbx
  int v15; // esi
  __int64 *v16; // rcx
  _QWORD v17[10]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  Child = (volatile signed __int32 *)AMLIGetFirstChild();
  if ( Child )
  {
    do
    {
      v4 = *(_WORD *)(*(_QWORD *)Child + 66LL);
      if ( v4 == 6 )
      {
        v10 = EnableDisableCMOSRegions(Child, 1LL);
        if ( v10 < 0 )
          v2 = v10;
      }
      else if ( v4 == 10 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)Child + 96LL);
        if ( v11 )
        {
          if ( *(_BYTE *)(v11 + 12) == 5 )
          {
            if ( (unsigned __int8)AMLIIsNamedChildPresent(a1, 1145653343LL) )
            {
              v14 = (__int64 *)AMLIGetNamedChild(a1, 1195725407LL, v12, v13);
              if ( v14 )
              {
                memset(v17, 0, sizeof(v17));
                WORD1(v17[0]) = 1;
                v17[2] = 5LL;
                WORD1(v17[5]) = 1;
                v17[7] = 1LL;
                v15 = AMLIAsyncEvalObject(v14, 0LL, 2u, v17, 0LL, 0LL);
                AMLIDereferenceHandleEx((__int64)v14);
                if ( v15 < 0 )
                  v2 = v15;
              }
            }
          }
        }
      }
      v5 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      v6 = *(_QWORD *)(*(_QWORD *)Child + 16LL);
      if ( !v6 || (v7 = **(_QWORD **)Child, v7 == v6 + 24) )
      {
        v8 = 0LL;
      }
      else
      {
        v8 = (volatile signed __int32 *)(v7 + 120);
        dword_1C0082908 = 0;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement(v8 + 2);
      }
      ExReleaseSpinLockShared(&ACPINamespaceLock, v5);
      dword_1C0082908 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(Child + 2, 0xFFFFFFFF) == 1 )
      {
        v16 = *(__int64 **)Child;
        if ( Child == (volatile signed __int32 *)(*(_QWORD *)Child + 120LL) )
        {
          DereferenceObjectEx((unsigned __int64)v16);
        }
        else
        {
          DereferenceObjectEx((unsigned __int64)v16);
          HeapFree(Child);
        }
      }
      Child = v8;
    }
    while ( v8 );
  }
  return v2;
}
