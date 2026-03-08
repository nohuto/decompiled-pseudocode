/*
 * XREFs of ?SetHandleProperty@CHolographicExclusiveViewMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0265440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::SetHandleProperty(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  int v6; // edi
  unsigned int v8; // esi
  int v9; // edi

  v6 = a2;
  v8 = 0;
  *((_QWORD *)this + 8) = PsGetCurrentProcess(this, a2, a3, a4);
  v9 = v6 - 4;
  if ( !v9 )
  {
    *((_QWORD *)this + 10) = a3;
    goto LABEL_6;
  }
  if ( v9 == 1 )
  {
    *((_QWORD *)this + 11) = a3;
LABEL_6:
    *((_DWORD *)this + 4) |= 0x80u;
    *a4 = 1;
    return v8;
  }
  return (unsigned int)-1073741811;
}
