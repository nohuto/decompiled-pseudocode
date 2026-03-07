__int64 __fastcall _FindQMsgFromMsg(struct tagTHREADINFO *const a1, struct tagMSG *const a2, struct tagQMSG **a3)
{
  const signed __int32 *v3; // r9

  v3 = *(const signed __int32 **)(*((_QWORD *)a1 + 54) + 24LL);
  if ( v3 )
  {
    while ( v3[4] != (unsigned __int64)(unsigned int)*(_QWORD *)a2
         || v3[6] != *((_DWORD *)a2 + 2)
         || *((_QWORD *)v3 + 4) != *((_QWORD *)a2 + 2)
         || *((_QWORD *)v3 + 8) != *((_QWORD *)a2 + 3)
         || v3[12] != *((_DWORD *)a2 + 8)
         || v3[13] != *((_DWORD *)a2 + 9)
         || v3[14] != *((_DWORD *)a2 + 10) )
    {
      if ( !_bittest(v3 + 25, 8u) )
      {
        v3 = *(const signed __int32 **)v3;
        if ( v3 )
          continue;
      }
      goto LABEL_11;
    }
    if ( !_bittest(v3 + 25, 8u) )
      v3 = *(const signed __int32 **)v3;
    *a3 = (struct tagQMSG *)v3;
    return 1LL;
  }
  else
  {
LABEL_11:
    UserSetLastError(87);
    return 0LL;
  }
}
