void __fastcall VidMmRecordTransfer(struct _VIDMM_GLOBAL_STATISTICS *a1, __int64 a2, int a3)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d

  if ( a3 )
  {
    v3 = a3 - 1;
    if ( v3 && (v4 = v3 - 1) != 0 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            *((_QWORD *)a1 + 47) += a2;
        }
        else
        {
          *((_QWORD *)a1 + 53) += a2;
        }
      }
      else
      {
        *((_QWORD *)a1 + 52) += a2;
      }
    }
    else
    {
      *((_QWORD *)a1 + 50) += a2;
    }
  }
  else
  {
    *((_QWORD *)a1 + 46) += a2;
  }
}
