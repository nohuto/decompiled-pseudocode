/*
 * XREFs of _anonymous_namespace_::GetModifiersStateForShell @ 0x1C021FCEC
 * Callers:
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C0221E40 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall anonymous_namespace_::GetModifiersStateForShell(__int64 a1)
{
  char v1; // r8
  __int16 v2; // dx
  __int16 result; // ax

  v1 = *(_BYTE *)(*(_QWORD *)(a1 + 432) + 240LL);
  v2 = (4 * (v1 & 1)) | 1;
  if ( (v1 & 0x10) == 0 )
    v2 = 4 * (v1 & 1);
  result = v2 | 2;
  if ( (v1 & 4) == 0 )
    return v2;
  return result;
}
