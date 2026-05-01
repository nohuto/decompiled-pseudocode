/*
 * XREFs of ??1?$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ @ 0x1803F40BC
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x18014F52C (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     ??_GJointDivider@@UEAAPEAXI@Z @ 0x180485F90 (--_GJointDivider@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HFONT__ *>::~CAutoHandle<HFONT__ *>(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteObject(v1);
  return (int)v1;
}
