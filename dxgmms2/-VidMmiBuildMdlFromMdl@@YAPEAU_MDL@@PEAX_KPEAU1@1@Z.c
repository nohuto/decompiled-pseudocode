PMDL __fastcall VidMmiBuildMdlFromMdl(unsigned __int64 Base, SIZE_T Length, struct _MDL *a3, __int64 a4)
{
  __int16 v4; // si
  ULONG v6; // ebp
  SIZE_T v8; // rbx
  PMDL result; // rax
  struct _MDL *v11; // rcx
  char *v12; // r8

  v4 = Base;
  v6 = Length;
  v8 = ((Base & 0xFFF) + Length + 4095) >> 12;
  result = MmCreateMdl(0LL, (PVOID)Base, Length);
  if ( result )
  {
    result->Next = 0LL;
    result->Size = 8 * (v8 + 6);
    result->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    result->ByteOffset = v4 & 0xFFF;
    result->ByteCount = v6;
    v11 = result + 1;
    result->MdlFlags = 1;
    if ( v8 )
    {
      v12 = (char *)((char *)&a3[1] + 8 * a4 - (char *)v11);
      do
      {
        v11->Next = *(struct _MDL **)((char *)&v11->Next + (_QWORD)v12);
        v11 = (struct _MDL *)((char *)v11 + 8);
        --v8;
      }
      while ( v8 );
    }
  }
  return result;
}
