/*
 * XREFs of ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x18016B250
 * Callers:
 *     ??0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x18016A278 (--0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSpriteVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x18016B058 (--0CSpriteVectorShape@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F484 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CVectorShape *__fastcall CVectorShape::CVectorShape(CVectorShape *this, struct CComposition *a2)
{
  __int64 v2; // r9

  CContent::CContent(this, a2);
  *(_BYTE *)(v2 + 88) = 1;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = 0LL;
  return (CVectorShape *)v2;
}
