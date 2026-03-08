/*
 * XREFs of ??0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x1C0026EF0
 * Callers:
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x1C007E97C (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 * Callees:
 *     <none>
 */

CFlipPropertySet *__fastcall CFlipPropertySet::CFlipPropertySet(
        CFlipPropertySet *this,
        int a2,
        struct FlipPropertyItem *a3,
        void *a4,
        unsigned int a5)
{
  CFlipPropertySet *result; // rax

  *((_DWORD *)this + 8) = a5;
  *(_QWORD *)this = &CFlipPropertySet::`vftable';
  result = this;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = a4;
  return result;
}
