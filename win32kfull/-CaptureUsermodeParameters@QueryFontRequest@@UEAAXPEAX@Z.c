void __fastcall QueryFontRequest::CaptureUsermodeParameters(QueryFontRequest *this, _QWORD *a2)
{
  _QWORD *v3; // r8
  unsigned __int64 v4; // rcx
  unsigned int *v5; // r15
  unsigned int v6; // esi
  ULONG v7; // r14d
  __int64 v8; // rbx
  unsigned int v9; // eax
  struct _IFIMETRICS *v10; // rax
  struct _IFIMETRICS *v11; // rbx

  v3 = (_QWORD *)a2[3];
  *((_QWORD *)this + 11) = a2[4];
  if ( v3 == *((_QWORD **)this + 10) )
  {
    **((_QWORD **)this + 8) = *v3;
    v4 = *((_QWORD *)this + 11);
    if ( v4 )
    {
      if ( (v4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v4 + 192 > MmUserProbeAddress || v4 + 192 < v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v5 = (unsigned int *)*((_QWORD *)this + 11);
      v6 = *v5;
      v7 = v5[1];
      if ( *v5 >= 0xB6 && (!v7 || v6 >= 0xC0 && v7 < v6 && v6 - v7 >= 0xC0) )
      {
        v8 = **((_QWORD **)this + 8);
        v9 = (**(__int64 (__fastcall ***)(QueryFontRequest *))this)(this);
        v10 = (struct _IFIMETRICS *)UmfdAllocation::ObtainKernelmodeAllocation(
                                      v9,
                                      v8,
                                      v5,
                                      v6,
                                      0LL,
                                      UmfdAllocation::TryBufferHasSameContent);
        v11 = v10;
        if ( v10 )
        {
          v10->cjThis = v6;
          v10->cjIfiExtra = v7;
          if ( ValidateIFIMETRICS(v10) )
            *((_QWORD *)this + 9) = v11;
          else
            UmfdAllocation::ReleaseKernelmodeAllocation(v11);
        }
      }
    }
  }
}
