/*
 * XREFs of wil::details::lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___::_lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___ @ 0x1802A836C
 * Callers:
 *     ?OpenOnDevice@CHolographicViewer@@UEAAJPEAUIDXGIDevice@@@Z @ 0x1802A8730 (-OpenOnDevice@CHolographicViewer@@UEAAJPEAUIDXGIDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___::_lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    CloseHandle(*(HANDLE *)(*(_QWORD *)a1 + 144LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 144LL) = 0LL;
  }
  return result;
}
