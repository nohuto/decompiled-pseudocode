/*
 * XREFs of GreExtEscape @ 0x1C013D59C
 * Callers:
 *     NtGdiExtEscape @ 0x1C00108F0 (NtGdiExtEscape.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C012CC5C (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C013D690 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02791A8 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XFERDCOBJ@@QEAA@XZ @ 0x1C027932C (--1XFERDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v14[12]; // [rsp+60h] [rbp-68h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v10 = 0;
  if ( v12[0] )
  {
    v10 = GreExtEscapeInternal((struct DCOBJ *)v12, a2, a3, a4, a5, a6);
  }
  else
  {
    XFERDCOBJ::XFERDCOBJ((XFERDCOBJ *)v14, a1);
    if ( v14[0] )
      v10 = GreExtEscapeInternal((struct DCOBJ *)v14, a2, a3, a4, a5, a6);
    XFERDCOBJ::~XFERDCOBJ((XFERDCOBJ *)v14);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v13);
  return v10;
}
