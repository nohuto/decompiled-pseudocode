void __fastcall VIDMM_GLOBAL::EvictAllAllocationInList(
        VIDMM_GLOBAL *this,
        struct _LIST_ENTRY *a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v5; // r14d
  unsigned __int64 v6; // r15
  unsigned int *i; // r13
  char *p_Blink; // rbp
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *v12; // rbx
  __int64 v13; // rcx
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v16; // [rsp+20h] [rbp-48h]

  Flink = a2->Flink;
  v5 = 0;
  v6 = 0LL;
  for ( i = a3; Flink != a2; *((_QWORD *)p_Blink + 44) = 0LL )
  {
    p_Blink = (char *)&Flink[-22].Blink;
    v11 = Flink[-14].Flink;
    v12 = Flink;
    Flink = Flink->Flink;
    v6 += *((_QWORD *)p_Blink + 2);
    LOBYTE(a3) = 1;
    LOBYTE(v16) = 0;
    ++v5;
    ((void (__fastcall *)(struct _LIST_ENTRY *, char *, unsigned int *, _QWORD, int, _QWORD))v11->Flink[3].Flink)(
      v11,
      p_Blink,
      a3,
      0LL,
      v16,
      0LL);
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v13, &EventEvictAllocation, (__int64)a3, p_Blink);
    v14 = v12->Flink;
    if ( v12->Flink->Blink != v12 || (Blink = v12->Blink, Blink->Flink != v12) )
      __fastfail(3u);
    Blink->Flink = v14;
    v14->Blink = Blink;
    v12->Flink = 0LL;
  }
  *i = v5;
  *a4 = v6;
}
