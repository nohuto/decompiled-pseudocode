/*
 * XREFs of ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C002C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0026E54 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C002D288 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C002D3BC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C002D3BC.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int WeakReferenceBase; // esi
  __int64 v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rax
  struct DirectComposition::CWeakReferenceBase *v12; // r14
  struct DirectComposition::CWeakReferenceBase *v13; // rdx
  bool *v14; // rax
  __int64 result; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  bool *v18; // rax
  bool *v19; // rcx
  bool *v20; // rcx
  struct DirectComposition::CWeakReferenceBase *v21; // [rsp+50h] [rbp-28h] BYREF
  char v22; // [rsp+90h] [rbp+18h] BYREF

  if ( a3 == 12 )
  {
    v16 = 0;
    if ( a4 && (v17 = *((unsigned int *)a4 + 9), (unsigned int)v17 < 0xCE) )
    {
      while ( (_DWORD)v17 != 169 )
      {
        LODWORD(v17) = dword_1C0254ED0[v17];
        if ( (unsigned int)v17 >= 0xCE )
          return (unsigned int)-1073741811;
      }
      if ( a4 != this[16] )
      {
        DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[16]);
        v18 = a5;
        this[16] = a4;
        *((_DWORD *)this + 4) &= ~0x800u;
        *v18 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v16;
  }
  else
  {
    if ( a3 == 25 )
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               this + 20,
               a4,
               1LL,
               2,
               this + 2,
               2048,
               1,
               a5);
    if ( a3 != 26 )
    {
      if ( a3 == 2 )
      {
        WeakReferenceBase = 0;
        if ( !a4 )
        {
LABEL_10:
          v10 = this[9];
          if ( v10 )
            v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v10 + 2);
          else
            v11 = 0LL;
          if ( a4 == v11 )
          {
            if ( v10 && !v11 )
            {
              DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v10);
              v20 = a5;
              this[9] = 0LL;
              *((_DWORD *)this + 4) &= ~0x40u;
              *v20 = 1;
            }
            return (unsigned int)WeakReferenceBase;
          }
          v21 = 0LL;
          v12 = 0LL;
          if ( !a4 )
            goto LABEL_16;
          WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, a4, &v21);
          if ( WeakReferenceBase >= 0 )
          {
            v12 = v21;
LABEL_16:
            v13 = this[9];
            if ( v13 )
              DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v13);
            v14 = a5;
            this[9] = v12;
            *((_DWORD *)this + 4) &= ~0x40u;
            *v14 = 1;
          }
          return (unsigned int)WeakReferenceBase;
        }
        v9 = *((unsigned int *)a4 + 9);
        if ( (unsigned int)v9 < 0xCE )
        {
          while ( (_DWORD)v9 != 147 )
          {
            LODWORD(v9) = dword_1C0254ED0[v9];
            if ( (unsigned int)v9 >= 0xCE )
              return (unsigned int)-1073741811;
          }
          goto LABEL_10;
        }
      }
      return (unsigned int)-1073741811;
    }
    v22 = 0;
    result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               this + 17,
               a4,
               0LL,
               169,
               this + 2,
               2048,
               1,
               &v22);
    if ( v22 )
    {
      v19 = a5;
      *((_BYTE *)this + 296) |= 1u;
      *v19 = 1;
    }
  }
  return result;
}
