PMDL __fastcall VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
        VIDMM_CPU_HOST_APERTURE *this,
        void *a2,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a3,
        unsigned __int16 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v8; // rbp
  int v9; // r14d
  PMDL Mdl; // r9
  __int64 v11; // r10
  int v12; // edi
  CSHORT *p_Size; // r8
  unsigned __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  unsigned int v19; // esi
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // r8d
  __int64 i; // r11

  v8 = a5 >> 12;
  v9 = *(_DWORD *)(*((_QWORD *)this + 6) + 376LL);
  Mdl = IoAllocateMdl(a2, (unsigned int)(a5 >> 12) << 12, 0, 0, 0LL);
  if ( Mdl )
  {
    Mdl->MdlFlags |= 0x802u;
    v11 = *(unsigned int *)a3;
    v12 = *((_DWORD *)a3 + 1);
    if ( v9 == 4096 )
    {
      p_Size = &Mdl[1].Size;
      v14 = *((_QWORD *)this + 4);
      v15 = (unsigned int)v11;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 24LL) + 436LL) & 8) != 0 )
      {
        Mdl[1].Next = *(struct _MDL **)(v14 + 8 * v11 + 48);
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v16 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v15);
            v15 = v16;
            *(_QWORD *)p_Size = *(_QWORD *)(v14 + 8 * v16 + 48);
            p_Size += 4;
          }
          while ( (_DWORD)v16 != v12 );
        }
      }
      else
      {
        v17 = v14 >> 12;
        Mdl[1].Next = (struct _MDL *)(v11 + v17);
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v18 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v15);
            v15 = v18;
            *(_QWORD *)p_Size = v18 + v17;
            p_Size += 4;
          }
          while ( (_DWORD)v18 != v12 );
        }
      }
    }
    else
    {
      v19 = a4 >> 12;
      v20 = *((_QWORD *)this + 4) >> 12;
      v21 = v20 + (unsigned int)(16 * v11) + v19;
      v22 = 16 - v19;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
      {
        if ( !v22 )
        {
          v22 = 16;
          LODWORD(v11) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v11);
          v21 = v20 + (unsigned int)(16 * v11);
        }
        --v22;
        *((_QWORD *)&Mdl[1].Next + i) = v21++;
      }
    }
  }
  return Mdl;
}
