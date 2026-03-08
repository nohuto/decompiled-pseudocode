/*
 * XREFs of ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x1800DE8C0
 * Callers:
 *     PrimitiveStorage::Alloc_16_ @ 0x18005BB80 (PrimitiveStorage--Alloc_16_.c)
 * Callees:
 *     <none>
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(
        PrimitiveStorage::CInlineStorageBase *this,
        const struct CDrawListPrimitive::GeometryCounts *a2)
{
  int v4; // edx
  __int64 v5; // r8
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // rax
  PrimitiveStorage::CInlineStorageBase *result; // rax
  __int128 v10; // [rsp+0h] [rbp-38h]
  __int128 v11; // [rsp+10h] [rbp-28h]
  __int64 v12; // [rsp+20h] [rbp-18h]

  v4 = *((_DWORD *)a2 + 2) + 2;
  v5 = *(unsigned int *)a2;
  v6 = *(_OWORD *)a2;
  *(_QWORD *)&v10 = (char *)this
                  + (((((_BYTE)this + 112) & 0xF) + 15) & 0x10)
                  - (unsigned __int64)(((_BYTE)this + 112) & 0xF)
                  + 112;
  *((_QWORD *)&v10 + 1) = v10 + (unsigned int)(8 * v4 * *(_DWORD *)a2);
  v7 = (unsigned int)(8 * *((_DWORD *)a2 + 1) * v4) + *((_QWORD *)&v10 + 1);
  v8 = *((unsigned int *)a2 + 3);
  ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  *(_OWORD *)((char *)this + 8) = v6;
  *(_QWORD *)&v11 = v7;
  *((_QWORD *)&v11 + 1) = v7 + 8 * v5;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 4);
  *((_OWORD *)this + 2) = v10;
  v12 = *((_QWORD *)&v11 + 1) + 2 * v8;
  *((_OWORD *)this + 3) = v11;
  *(_QWORD *)this = &CDrawListPrimitive0::`vftable';
  result = this;
  *((_QWORD *)this + 8) = v12;
  return result;
}
