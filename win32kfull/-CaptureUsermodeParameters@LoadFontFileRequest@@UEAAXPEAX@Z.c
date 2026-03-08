/*
 * XREFs of ?CaptureUsermodeParameters@LoadFontFileRequest@@UEAAXPEAX@Z @ 0x1C00DC870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LoadFontFileRequest::CaptureUsermodeParameters(LoadFontFileRequest *this, _DWORD *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v3 = a2[25];
  *((_DWORD *)this + 64) = v3;
  v4 = *((_QWORD *)a2 + 13);
  *((_QWORD *)this + 31) = v4;
  if ( v4 && v3 <= 3 )
  {
    v5 = EngAllocMem(0, 0x10u, 0x46464855u);
    *((_QWORD *)this + 33) = v5;
    if ( v5 )
    {
      *v5 = *((_QWORD *)this + 31);
      *(_DWORD *)(*((_QWORD *)this + 33) + 8LL) = *((_DWORD *)this + 64);
      *(_BYTE *)(*((_QWORD *)this + 33) + 12LL) = 0;
    }
  }
}
