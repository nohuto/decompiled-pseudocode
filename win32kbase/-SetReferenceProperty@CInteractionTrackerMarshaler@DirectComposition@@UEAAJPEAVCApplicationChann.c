/*
 * XREFs of ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0268790
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C00619CC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetReferenceProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  __int64 result; // rax

  v6 = a3 - 18;
  if ( v6 )
  {
    v7 = v6 - 15;
    if ( v7 )
    {
      v8 = v7 - 4;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 27;
              if ( v12 )
              {
                if ( v12 == 1 )
                  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                           a2,
                           (struct DirectComposition::CWeakReferenceBase **)this + 42,
                           (unsigned int *)a4,
                           (__int64)a4,
                           0x2Du,
                           (int *)this + 4,
                           0x10000000,
                           1,
                           a5);
                else
                  return 3221225485LL;
              }
              else
              {
                return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                         a2,
                         (struct DirectComposition::CWeakReferenceBase **)this + 41,
                         (unsigned int *)a4,
                         (__int64)a4,
                         0x2Du,
                         (int *)this + 4,
                         0x8000000,
                         1,
                         a5);
              }
            }
            else
            {
              return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                       a2,
                       (struct DirectComposition::CResourceMarshaler **)this + 32,
                       (__int64)a4,
                       1,
                       45,
                       (int *)this + 4,
                       0x400000,
                       1,
                       a5);
            }
          }
          else
          {
            return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                     a2,
                     (struct DirectComposition::CResourceMarshaler **)this + 31,
                     (__int64)a4,
                     1,
                     45,
                     (int *)this + 4,
                     0x200000,
                     1,
                     a5);
          }
        }
        else
        {
          return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                   a2,
                   (struct DirectComposition::CResourceMarshaler **)this + 30,
                   (__int64)a4,
                   1,
                   45,
                   (int *)this + 4,
                   0x100000,
                   1,
                   a5);
        }
      }
      else
      {
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a2,
                 (struct DirectComposition::CResourceMarshaler **)this + 29,
                 (__int64)a4,
                 1,
                 45,
                 (int *)this + 4,
                 0x80000,
                 1,
                 a5);
      }
    }
    else
    {
      result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a2,
                 (struct DirectComposition::CWeakReferenceBase **)this + 28,
                 (unsigned int *)a4,
                 (__int64)a4,
                 0xBu,
                 (int *)this + 4,
                 0x40000,
                 1,
                 a5);
      if ( (int)result >= 0 )
        *((_BYTE *)this + 464) &= ~2u;
    }
  }
  else
  {
    result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CWeakReferenceBase **)this + 27,
               (unsigned int *)a4,
               (__int64)a4,
               0xBu,
               (int *)this + 4,
               1024,
               1,
               a5);
    if ( (int)result >= 0 )
      *((_BYTE *)this + 464) &= ~1u;
  }
  return result;
}
