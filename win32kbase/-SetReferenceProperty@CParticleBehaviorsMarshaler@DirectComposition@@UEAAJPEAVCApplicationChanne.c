/*
 * XREFs of ?SetReferenceProperty@CParticleBehaviorsMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C025D420
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CParticleBehaviorsMarshaler::SetReferenceProperty(
        DirectComposition::CParticleBehaviorsMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  struct DirectComposition::CResourceMarshaler **v10; // rdx
  struct DirectComposition::CResourceMarshaler **v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  struct DirectComposition::CResourceMarshaler **v16; // rdx
  int v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+30h] [rbp-28h]
  bool *v20; // [rsp+40h] [rbp-18h]
  bool *v21; // [rsp+40h] [rbp-18h]
  bool *v22; // [rsp+40h] [rbp-18h]

  *a5 = 0;
  if ( a3 <= 5 )
  {
    if ( a3 == 5 )
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 12,
               (__int64)a4,
               1,
               118,
               (int *)this + 4,
               1024,
               0,
               a5);
    if ( a3 )
    {
      v6 = a3 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                       a2,
                       (struct DirectComposition::CResourceMarshaler **)this + 11,
                       (__int64)a4,
                       1,
                       125,
                       (int *)this + 4,
                       512,
                       0,
                       a5);
            return 3221225485LL;
          }
          v20 = a5;
          v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 80);
          v17 = 256;
        }
        else
        {
          v20 = a5;
          v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 72);
          v17 = 128;
        }
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a2,
                 v10,
                 (__int64)a4,
                 1,
                 122,
                 (int *)this + 4,
                 v17,
                 0,
                 v20);
      }
      v21 = a5;
      v11 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 64);
      v18 = 64;
    }
    else
    {
      v21 = a5;
      v11 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 56);
      v18 = 32;
    }
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             v11,
             (__int64)a4,
             1,
             124,
             (int *)this + 4,
             v18,
             0,
             v21);
  }
  v12 = a3 - 6;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
            return 3221225485LL;
          v20 = a5;
          v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 136);
          v17 = 0x8000;
          return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                   a2,
                   v10,
                   (__int64)a4,
                   1,
                   122,
                   (int *)this + 4,
                   v17,
                   0,
                   v20);
        }
        v22 = a5;
        v16 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 128);
        v19 = 0x4000;
      }
      else
      {
        v22 = a5;
        v16 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 120);
        v19 = 0x2000;
      }
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               v16,
               (__int64)a4,
               1,
               123,
               (int *)this + 4,
               v19,
               0,
               v22);
    }
    v21 = a5;
    v11 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 112);
    v18 = 4096;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             v11,
             (__int64)a4,
             1,
             124,
             (int *)this + 4,
             v18,
             0,
             v21);
  }
  v20 = a5;
  v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 104);
  v17 = 2048;
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           a2,
           v10,
           (__int64)a4,
           1,
           122,
           (int *)this + 4,
           v17,
           0,
           v20);
}
