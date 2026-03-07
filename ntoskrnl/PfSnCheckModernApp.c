__int64 __fastcall PfSnCheckModernApp(int *a1, _DWORD *a2, unsigned __int8 *a3, _QWORD *a4)
{
  int v8; // ebp
  _KPROCESS *Process; // r14
  ULONG_PTR v10; // r15
  int PackageIdentity; // eax
  unsigned int v12; // esi
  int v13; // edi
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int8 *v21; // r11
  __int64 v22; // r10
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r10d
  int v27; // r10d
  int v28; // r10d
  int v29; // r10d
  int v30; // r10d
  int v31; // r10d
  int v32; // r10d
  int v33; // r10d
  int v34; // r10d
  int v35; // r10d
  int v36; // r10d
  int v37; // r10d
  __int64 v38; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v39[144]; // [rsp+40h] [rbp-E8h] BYREF

  v8 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  v38 = 130LL;
  PackageIdentity = RtlQueryPackageIdentity(v10, (int)a3, (int)a4, (int)v39, (__int64)&v38, 0LL);
  v12 = PackageIdentity;
  if ( PackageIdentity >= 0 )
  {
    v15 = 314159LL;
    v16 = *a4 - 2LL;
    v17 = 314159LL;
    v13 = 1;
    if ( v16 >= 8 )
    {
      v18 = (unsigned __int64)v16 >> 3;
      v16 -= 8 * ((unsigned __int64)v16 >> 3);
      do
      {
        v19 = a3[6] + 37 * (a3[5] + 37 * (a3[4] + 37 * (a3[3] + 37 * (a3[2] + 37 * (a3[1] + 37 * (*a3 + 37 * v17))))));
        v20 = a3[7];
        a3 += 8;
        v17 = v20 + 37 * v19;
        --v18;
      }
      while ( v18 );
    }
    if ( v16 < 1 || v16 > 7 )
    {
LABEL_13:
      v21 = v39;
      v22 = v38 - 2;
      if ( v38 - 2 >= 8 )
      {
        v23 = (unsigned __int64)v22 >> 3;
        v22 -= 8 * ((unsigned __int64)v22 >> 3);
        do
        {
          v24 = v21[6]
              + 37 * (v21[5] + 37 * (v21[4] + 37 * (v21[3] + 37 * (v21[2] + 37 * (v21[1] + 37 * (*v21 + 37 * v15))))));
          v25 = v21[7];
          v21 += 8;
          v15 = v25 + 37 * v24;
          --v23;
        }
        while ( v23 );
      }
      if ( v22 < 1 || v22 > 7 )
        goto LABEL_17;
      v32 = v22 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              v36 = v35 - 1;
              if ( v36 )
              {
                v37 = v36 - 1;
                if ( v37 )
                {
                  if ( v37 != 1 )
                  {
LABEL_17:
                    v8 = v15 + v17;
                    goto LABEL_3;
                  }
                  LODWORD(v15) = *v21++ + 37 * v15;
                }
                LODWORD(v15) = *v21++ + 37 * v15;
              }
              LODWORD(v15) = *v21++ + 37 * v15;
            }
            LODWORD(v15) = *v21++ + 37 * v15;
          }
          LODWORD(v15) = *v21++ + 37 * v15;
        }
        LODWORD(v15) = *v21++ + 37 * v15;
      }
      LODWORD(v15) = *v21 + 37 * v15;
      goto LABEL_17;
    }
    v26 = v16 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                if ( v31 != 1 )
                  goto LABEL_13;
                LODWORD(v17) = *a3++ + 37 * v17;
              }
              LODWORD(v17) = *a3++ + 37 * v17;
            }
            LODWORD(v17) = *a3++ + 37 * v17;
          }
          LODWORD(v17) = *a3++ + 37 * v17;
        }
        LODWORD(v17) = *a3++ + 37 * v17;
      }
      LODWORD(v17) = *a3++ + 37 * v17;
    }
    LODWORD(v17) = *a3 + 37 * v17;
    goto LABEL_13;
  }
  v13 = 0;
  if ( PackageIdentity == -1073741275 )
  {
LABEL_3:
    *a2 = v8;
    v12 = 0;
    *a1 = v13;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.StaticBitmap[5], v10, 0x746C6644u);
  return v12;
}
