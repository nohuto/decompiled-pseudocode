/*
 * XREFs of ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001009C
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180010060 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x1800115C0 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800EE108 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x18010F020 (--_V@YAXPEAX_K@Z.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1801C06D0 (--_GCRegion@@QEAAPEAXI@Z.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(
        CPrimitiveGroupDrawListGenerator *this,
        unsigned int a2)
{
  CPrimitiveBuffer *v3; // rcx
  CPrimitiveBuffer *v4; // rcx
  CRegion *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rbx
  char *v9; // rbx

  *(_QWORD *)this = &CPrimitiveGroupDrawListGenerator::`vftable';
  v3 = (CPrimitiveBuffer *)*((_QWORD *)this + 2);
  if ( v3 )
    CPrimitiveBuffer::`scalar deleting destructor'(v3, a2);
  v4 = (CPrimitiveBuffer *)*((_QWORD *)this + 3);
  if ( v4 )
    CPrimitiveBuffer::`scalar deleting destructor'(v4, a2);
  v5 = (CRegion *)*((_QWORD *)this + 12);
  if ( v5 )
    CRegion::`scalar deleting destructor'(v5, 1u);
  v6 = (char *)*((_QWORD *)this + 11);
  if ( v6 )
  {
    v9 = v6 - 8;
    `vector destructor iterator'(v6, 0x18uLL, *((_QWORD *)v6 - 1), (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v9);
  }
  v7 = (char *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    v8 = v7 - 8;
    `vector destructor iterator'(v7, 0x18uLL, *((_QWORD *)v7 - 1), (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v8);
  }
}
