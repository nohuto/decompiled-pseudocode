/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180031530
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x180031670 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

bool __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        __int64 a3,
        struct CMILMatrix *a4)
{
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rcx
  _OWORD *v15; // rax
  void *v16; // rcx

  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 16LL) + 496LL);
  if ( !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 288, a2) )
  {
    v6 = 1;
    *(_OWORD *)v9 = *(_OWORD *)v8;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(v8 + 16);
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(v8 + 32);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(v8 + 48);
    *(_DWORD *)(v9 + 64) = *(_DWORD *)(v8 + 64);
  }
  *((_BYTE *)this + 11) = v10;
  if ( a4 )
  {
    v14 = *((_QWORD *)this + 34);
    if ( v14 )
    {
      *(_OWORD *)v14 = *(_OWORD *)v11;
      *(_OWORD *)(v14 + 16) = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(v14 + 32) = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(v14 + 48) = *(_OWORD *)(v11 + 48);
      *(_DWORD *)(v14 + 64) = *(_DWORD *)(v11 + 64);
    }
    else
    {
      v15 = operator new(0x44uLL);
      v16 = v15;
      if ( v15 )
      {
        *v15 = *(_OWORD *)a4;
        v15[1] = *((_OWORD *)a4 + 1);
        v15[2] = *((_OWORD *)a4 + 2);
        v15[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v15 + 16) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v16 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 34, (signed __int64)v16, 0LL) )
        operator delete(v16, 0x44uLL);
    }
  }
  if ( v6 || (v12 = *((_QWORD *)this + 31)) == 0 )
  {
    *((_QWORD *)this + 31) = v7;
    v12 = v7;
  }
  return v12 == v7;
}
