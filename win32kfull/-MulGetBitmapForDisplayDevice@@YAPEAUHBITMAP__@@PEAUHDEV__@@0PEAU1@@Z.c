HBITMAP __fastcall MulGetBitmapForDisplayDevice(HDEV a1, HDEV a2, HBITMAP a3)
{
  HBITMAP v3; // rbx
  HDEV v4; // rdi
  __int64 v5; // rax
  __int64 ***v6; // rcx
  __int64 **v7; // rdx
  int v8; // r8d

  v3 = a3;
  v4 = a2;
  if ( a1 )
  {
    if ( ((_DWORD)a1[10] & 0x20000) != 0 )
    {
      if ( a2 )
      {
        LOBYTE(a2) = 5;
        v5 = HmgShareLockCheck(a3, a2);
        if ( v5 )
        {
          if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
          {
            v6 = *(__int64 ****)(v5 + 40);
            v7 = *v6;
            v8 = *((_DWORD *)v6 + 4);
            while ( v7[6] != (__int64 *)v4 )
            {
              v7 = (__int64 **)*v7;
              if ( !--v8 )
                goto LABEL_11;
            }
            v3 = *(HBITMAP *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 8LL) + 8LL * *((unsigned int *)v7 + 4))
                            + 8LL);
          }
LABEL_11:
          DEC_SHARE_REF_CNT(v5);
        }
      }
    }
  }
  return v3;
}
