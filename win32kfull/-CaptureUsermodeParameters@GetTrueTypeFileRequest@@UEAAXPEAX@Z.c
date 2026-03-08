/*
 * XREFs of ?CaptureUsermodeParameters@GetTrueTypeFileRequest@@UEAAXPEAX@Z @ 0x1C03085F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C00C490C (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 */

void __fastcall GetTrueTypeFileRequest::CaptureUsermodeParameters(GetTrueTypeFileRequest *this, _QWORD *a2)
{
  _DWORD *v3; // rax
  char *v4; // rdi

  v3 = (_DWORD *)a2[1];
  if ( v3 )
  {
    v4 = (char *)a2[2];
    if ( v3 == *((_DWORD **)this + 8) )
    {
      **((_DWORD **)this + 6) = *v3;
      Win32ProbeForRead(v4, **((unsigned int **)this + 6), 8);
      *((_QWORD *)this + 7) = v4;
    }
  }
}
