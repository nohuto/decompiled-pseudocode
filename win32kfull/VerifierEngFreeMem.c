/*
 * XREFs of VerifierEngFreeMem @ 0x1C02A9840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VerifierEngFreeMem(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax

  if ( a1 )
  {
    v1 = a1;
    v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
    if ( (*(_DWORD *)(v2 + 23592) & 8) != 0 )
    {
      v1 -= 4;
      GreAcquireSemaphore(*(_QWORD *)(v2 + 23616));
      v3 = *v1;
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.vs.hsemPoolTracker");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v2 + 23616));
    }
    MultiUserGreTrackRemoveEngResource(v1 - 4);
    Win32FreePool(v1 - 4);
  }
}
