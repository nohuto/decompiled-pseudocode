/*
 * XREFs of ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x180026FD8
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180026E08 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     <none>
 */

CSecondaryWindowRepresentation *__fastcall CSecondaryWindowRepresentation::CSecondaryWindowRepresentation(
        CSecondaryWindowRepresentation *this)
{
  CSecondaryWindowRepresentation *result; // rax

  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 45) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 44) = 0x3FF0000000000000LL;
  result = this;
  *((_BYTE *)this + 416) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 160) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 30) = 100;
  *((_DWORD *)this + 92) = 1065353216;
  return result;
}
